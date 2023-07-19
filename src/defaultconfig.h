#define DEFAULT_WIFI_PASSWORD   "pmsensor"

#define OLED_I2C_ADDR 0x3C

#define PIN_OLED_RESET  16
#define PIN_OLED_SDA    4
#define PIN_OLED_SCL    15
#define PIN_BUTTON      0
#define PIN_SDS_RX      22
#define PIN_SDS_TX      23
#define PIN_VEXT        21

#define LORA_DR DR_SF9
#define LORA_TXPW 14

#define UG_PER_M3       "\u00B5g/m\u00B3"

// total measurement cycle time (seconds)
#define TIME_CYCLE      300
// time to show version info
#define TIME_VERSION    5
// duration of warmup (seconds)
#define TIME_WARMUP     20
// duration of measurement (seconds)
#define TIME_MEASURE    10
// reboot interval (seconds)
#define REBOOT_INTERVAL 2592000UL
// time to keep display on (ms)
#define TIME_OLED_ENABLED   300000UL