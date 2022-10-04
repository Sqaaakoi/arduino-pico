#pragma once

// Pin definitions taken from:
//    https://cdn.shopify.com/s/files/1/0174/1800/files/keybow_2040_schematic.pdf?v=1629994431

// BOOTSEL / User switch
#define PIN_USER_SW    23

// Not pinned out
#define PIN_SERIAL1_TX (0u)
#define PIN_SERIAL1_RX (1u)

// Not pinned out
#define PIN_SERIAL2_TX (31u)
#define PIN_SERIAL2_RX (31u)

// SPI
#define PIN_SPI1_MISO  (31u)
#define PIN_SPI1_MOSI  (31u)
#define PIN_SPI1_SCK   (31u)
#define PIN_SPI1_SS    (31u)

// Not pinned out
#define PIN_SPI0_MISO  (31u)
#define PIN_SPI0_MOSI  (31u)
#define PIN_SPI0_SCK   (31u)
#define PIN_SPI0_SS    (31u)

// Wire
#define PIN_WIRE0_SDA  (4u)
#define PIN_WIRE0_SCL  (5u)

// Not pinned out
#define PIN_WIRE1_SDA  (31u)
#define PIN_WIRE1_SCL  (31u)

#define SERIAL_HOWMANY (1u)
#define SPI_HOWMANY    (1u)
#define WIRE_HOWMANY   (1u)

// Keys
static const uint8_t K0 = (21u);
static const uint8_t K1 = (20u);
static const uint8_t K2 = (19u);
static const uint8_t K3 = (18u);
static const uint8_t K4 = (17u);
static const uint8_t K5 = (16u);
static const uint8_t K6 = (15u);
static const uint8_t K7 = (14u);
static const uint8_t K8 = (13u);
static const uint8_t K9 = (12u);
static const uint8_t K10 = (11u);
static const uint8_t K11 = (10u);
static const uint8_t K12 = (9u);
static const uint8_t K13 = (8u);
static const uint8_t K14 = (7u);
static const uint8_t K15 = (6u);

#include "../generic/common.h"
