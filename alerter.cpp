#include <iostream>
#include <assert.h>
#include "alerter_stub.hpp"

int alertFailureCount = 0;

float farenheitTOcelcius(float farenheit)
{
    return (farenheit - 32) * 5 / 9;
}

int alertInCelcius(float farenheit) {
    float celcius = farenheitTOcelcius(farenheit);
    int returnCode = alert::networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
    return alertFailureCount;
}

int main() {
    assert(alertInCelcius(400.5) == 1);
    assert(alertInCelcius(303.6) == 0);
    assert(alert::networkAlertStub(farenheitTOcelcius(303.6)) == 200);
    assert(alert::networkAlertStub(farenheitTOcelcius(400.5)) == 500); // Since the threshold is 200 (in celcius), i am passing 204(in celicus) and expecting 500 as a return value.
    assert(alertFailureCount == 1); // Number of failures doesn't match the count. It's a bug.
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}