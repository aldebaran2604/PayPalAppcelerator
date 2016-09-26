package com.bea.paypal;

import java.math.BigDecimal;

import com.paypal.android.sdk.payments.PayPalConfiguration;
import com.paypal.android.sdk.payments.PayPalPayment;
import com.paypal.android.sdk.payments.PayPalService;
import com.paypal.android.sdk.payments.PaymentActivity;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;


public class Payment extends Activity {
	private static final int REQUEST_CODE_PAYMENT = 1;
	
	private BigDecimal amount;
	private String currencyCode;
	private String shortDescription;
	private PayPalConfiguration paypalConfig; 
	
	
	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		
		Intent intent = this.getIntent();
		Bundle extras = intent.getExtras();
		this.amount = (BigDecimal)extras.get("amount");
		this.currencyCode = extras.getString("currencyCode");
		this.shortDescription = extras.getString("shortDescription");
		this.paypalConfig = (PayPalConfiguration)extras.get("paypalConfig");
		
		PayPalPayment payment = new PayPalPayment(this.amount, this.currencyCode, this.shortDescription, PayPalPayment.PAYMENT_INTENT_SALE);
		
		Intent intentPayPal = new Intent(this.getApplicationContext(), PaymentActivity.class);
		intentPayPal.putExtra(PayPalService.EXTRA_PAYPAL_CONFIGURATION, this.paypalConfig);
		intentPayPal.putExtra(PaymentActivity.EXTRA_PAYMENT, payment);
		this.startActivityForResult(intentPayPal, REQUEST_CODE_PAYMENT);
	}
	
	@Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
		super.onActivityResult(requestCode, resultCode, data);
		this.setResult(resultCode, data);
		this.finish();
	}
}
