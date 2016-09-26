/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf -L C++ -E -t C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.bea.paypal.ModulopaypalModule.h"
#include "com.bea.paypal.ExampleProxy.h"


#line 14 "C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 7, duplicates = 0 */

class ModulopaypalBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ModulopaypalBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
ModulopaypalBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 27,
      MAX_WORD_LENGTH = 33,
      MIN_HASH_VALUE = 27,
      MAX_HASH_VALUE = 33
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.bea.paypal.ExampleProxy",::com::bea::paypal::modulopaypal::ExampleProxy::bindProxy,::com::bea::paypal::modulopaypal::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""},
#line 17 "C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf"
      {"com.bea.paypal.ModulopaypalModule",::com::bea::paypal::ModulopaypalModule::bindProxy,::com::bea::paypal::ModulopaypalModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "C:/Users/lpadilla/Documents/Appcelerator_Studio_Workspace/modulopaypal/android/build/generated/KrollGeneratedBindings.gperf"

