# Getting started with ESP32-S3 + Arduino


## Issues

### `fatal error: pins_arduino.h: No such file or directory`

Set the `"variant"` key in `esp32-s3-wroom-1-n4r2.json` board definition file to `"esp32s3"` defined in `arduino-esp32` repo:

```json
"variant": "esp32s3"
```

https://github.com/espressif/arduino-esp32/tree/master/variants
