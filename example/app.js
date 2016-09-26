var paypalmodulo = require("com.bea.paypal");

paypalmodulo.initialize({
	sandbox_id: "AcqxN49MzL0JuWKlHF8nbhO2f4SpfzLEcs2mPYTX5kCB1aDw3i9PgdnroinnFeg9TqKK2SSiBGx1vovF",
	live_id: "AZWiDlRJLv0h2QEKnuncw4dEdbUs7J54H35HyuVRhzhGuVTYlPi6uok7rpXjpejwtRyLu7hSiN8h6yoJ",
	environment: paypalmodulo.ENVIRONMENT_SANDBOX
});

paypalmodulo.createConfiguration({
	currencyCode: "USD",
	amount: 0.1,
	shortDescription: "BEA",
	intent: paypalmodulo.PAYMENT_INTENT_SALE
});

function doClick(e) {
    paypalmodulo.show();
}

paypalmodulo.addEventListener("paymentDidDefault", function(e) {
    Ti.API.warn("paymentDidDefault");
    Ti.API.warn(JSON.stringify(e));
});

paypalmodulo.addEventListener("paymentDidComplete", function(e) {
    Ti.API.warn("paymentDidComplete");
    Ti.API.warn(JSON.stringify(e));
});

paypalmodulo.addEventListener("paymentDidCancel", function(e) {
    Ti.API.warn("paymentDidCancel");
    Ti.API.warn(JSON.stringify(e));
});

paypalmodulo.addEventListener("paymentDidInvalid", function(e) {
    Ti.API.warn("paymentDidInvalid");
    Ti.API.warn(JSON.stringify(e));
});

$.index.open();
