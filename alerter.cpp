#include <iostream>
#include <assert.h>
#include "alerter_stub.hpp"

int alertFailureCount = 0;

float farenheitTOcelcius(float farenheit)
{
    return (farenheit - 32) * 5 / 9;
}

void alertInCelcius(float farenheit) {
    float celcius = farenheitTOcelcius(farenheit);
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    assert(networkAlertStub(farenheitTOcelcius(400.5)) == 500); // Since the threshold is 200 (in celcius), i am passing 204(in celicus) and expecting 500 as a return value.
    assert(alertFailureCount == 1); // Number of failures doesn't match the count. Its one of the bug.
    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}