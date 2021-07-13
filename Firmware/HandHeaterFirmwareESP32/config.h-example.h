/* ----------------- General config -------------------------------- */
/* WiFi */
#define WIFI_SSID       "YOUR SSID"
#define WIFI_PASSWORD   "YOUR PSK"

/* MQTT */
const char* mqtt_broker           = "192.168.1.111"; // IP address of your MQTT broker
const char* mqtt_username         = "";              // Your MQTT username
const char* mqtt_password         = "";              // Your MQTT password

/* Serial */
#define     SERIAL_BAUD_RATE    115200               // Speed for USB serial console

/* Bluetooth */
#define BT_PASSWORD     "MyKey"    // All messages must be prepended with this key

/* Activate features */
#define ENABLE_WIFI           true
#define ENABLE_MQTT           true
#define ENABLE_BLUETOOTH      false
#define ENABLE_CAN            true

/* Heater parameters */
#define FAN_COLD_SPEED          80
#define FAN_WARM_SPEED         100
#define FAN_HOT_SPEED          140
#define TEMPERATURE_WARM        80
#define TEMPERATURE_HOT        120
#define TEMPERATURE_SAFE_LIMIT 130   // Maximum safe output temperature in Celsius

/* ----------------- Hardware-specific config ---------------------- */
/* Temperature sensor */
#define BCOEFFICIENT          3380   // Thermistor beta coefficient
#define TEMPERATURE_OFFSET      -7   // Correction for offset
#define FAN_TACHO_PROCESS_INTERVAL  0.5  // How often to process accumulated fan tacho pulses, in seconds

#define FAN_FREQUENCY        15000   // PWM frequency for fan control
#define FAN_CHANNEL              0   // PWM output channel for fan
#define FAN_RESOLUTION           8   // PWM resolution for fan
#define HEATER_FREQUENCY      5000   // PWM frequency for heater control
#define HEATER_CHANNEL           1   // PWM output channel for heater
#define HEATER_RESOLUTION        8   // PWM resolution for heater

// Pin definitions
#define CAN_TX_PIN       GPIO_NUM_5
#define CAN_RX_PIN       GPIO_NUM_4
#define BUTTON_PIN       GPIO_NUM_14
#define HEATER_PIN       GPIO_NUM_16  // PWM
#define FAN_PIN          GPIO_NUM_17  // PWM
#define STATUS_LED_PIN   GPIO_NUM_25
#define TEMP_SENSOR_PIN  GPIO_NUM_32
#define FAN_TACHO_PIN    GPIO_NUM_33
