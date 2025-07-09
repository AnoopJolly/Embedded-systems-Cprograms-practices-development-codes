#include<stdio.h>
#include<stdint.h>

uint32_t packed_data = 0xAB1234CD; // sensor packed_data

uint8_t sensor_id;
uint16_t timestamp;
int8_t temperature;
uint8_t humidity;


int main(){
uint32_t unpacked_data =0;

sensor_id = (packed_data >>24 ) & 0xff;
timestamp =(packed_data>>8) & 0xffff;
temperature=(packed_data >>4) & 0xf;
humidity=(packed_data>>0) & 0xf;

printf("packed data 0x%8X\n",packed_data);
printf("\tunpacked_data:\n\n");

printf("\tsensor_id is 0x%2X\n",sensor_id);
printf("\ttimestamp is 0x%4X\n",timestamp);
printf("\ttemperature is %1d\n",temperature);
printf("\thumidity is %u\n",humidity);

return 0;
}
