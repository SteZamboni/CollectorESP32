#include "stdafx.h"
#include "SensorData.h"


using namespace std;

SensorData::SensorData(int c, int rssi, int sec, int usec, string s, string seq_ctrl, string ssid) :
	channel(c), RSSI(rssi), seconds(sec), useconds(usec), source(s), sequence_ctrl(seq_ctrl), SSID(ssid) {

}

SensorData::~SensorData() {

}

void SensorData::printData() {
	cout << "PACKET TYPE=PROBE CHAN=" << channel << " RSSI=" << RSSI
		<< " ADDR=" << source << " SEQ=" << sequence_ctrl
		<< " Time_sec=" << seconds << " Time_usec=" << useconds << " SSID=" << SSID << endl;
	return;
}

