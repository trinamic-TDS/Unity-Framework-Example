// spi.h
#ifndef SPI_H
#define SPI_H

// Function to send data via SPI
void spi_send_data(int device_id, char data);

// Function to receive data from SPI
char spi_receive_data(int device_id);

#endif // SPI_H
