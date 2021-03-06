#ifndef MGOS_BME280_DEFS_H_
#define MGOS_BME280_DEFS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct
{
    double temperature;
    double pressure;
    double humidity;
} sensor_data;

bool mgos_bme280_get_sensor_data(sensor_data *data);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif