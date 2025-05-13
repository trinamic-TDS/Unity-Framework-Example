// spi.c
#include "spi.h"
#include "spi_functionality.h"

// Function that sends a message to a device via SPI
void send_message_to_device(int device_id, const char *message) {
    // We will assume that spi_send_data sends each character of the message one by one.
    while (*message != '\0') {
        spi_send_data(device_id, message);
        message++;
    }
}
