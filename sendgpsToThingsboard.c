#include<stdio.h>
// #include<string.h>
// #include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* args[]){

	while(1){
		char cmd[] =  "mosquitto_pub -d -h \"demo.thingsboard.io\" -t \"v1/devices/me/telemetry\" -u \"EKItK4dXjVWnjfyZCOzd\" -f \"data.json\"";
		system(cmd);
		sleep(10);
	}

	return 0;
}
