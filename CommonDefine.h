#ifndef _COMMON_DEFINE_
#define _COMMON_DEFINE_

// 표준 입출력
#include <iostream>
// 라즈베리파이 gpio를 사용하기 위한 함수
#include <wiringPi.h>
// 라즈베리파이 gpio serial port를 사용하기 위한 함수
#include <wiringSerial.h>
// new 연산자 예외처리
#include <new>

// wiringPI pin 번호 정의
const int LEFT_TIRE_PWM = 0;
const int LEFT_TIRE_DIR = 1;

const int RIGHT_TIRE_PWM = 2;
const int RIGHT_TIRE_DIR = 3;

// 초음파 센서 pin 번호 정의
const int ECHO_PIN = 28;
const int TRIG_PIN = 29;

// 블록 타입 정의
const int MOVEBLOCK = 0;
const int ROTATEBLOCK = 1;
const int STOPBLOCK = 2;
const int REPEATBLOCK = 3;
const int CONDITIONBLOCK = 4;
const int DISTANCECHECKBLOCK = 5;

// 실행 코드 정의
const int STARTCODE = 100;
const int ENDCODE = 101;
// 중지 코드 정의
const int STOPCODE = 102;
// 종료 코드 정의
const int EXITCODE = 103;


// wiringPI 초기화 전역 함수
static bool initWiringPi()
{
	if(wiringPiSetup() == -1)
	{
		std::cerr << "wiringPiSetup() failed";
		return false;
	}

	return true;
}

#endif
