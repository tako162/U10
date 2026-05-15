const limitSW_L = D6;
const limitSW_R = D7;
const limitSW_F = D10;
const limitSW_B = D11;
const limitSW_U = D12;
const limitSW_D = D13;

const motor_X_IN1 = D2;
const motor_X_IN2 = D3;
const motor_Y_IN1 = D4;
const motor_Y_IN2 = D5;
const motor_Z_IN1 = D8;
const motor_Z_IN2 = D9;

void setup() {
    pinMode(limitSW_L,INPUT_PULLUP);
    pinMode(limitSW_R,INPUT_PULLUP);
    pinMode(limitSW_F,INPUT_PULLUP);
    pinMode(limitSW_B,INPUT_PULLUP);
    pinMode(limitSW_U,INPUT_PULLUP);
    pinMode(limitSW_D,INPUT_PULLUP);

    pinMode(motor_X_IN1,OUTPUT);
    pinMode(motor_X_IN2,OUTPUT);
    pinMode(motor_Y_IN1,OUTPUT);
    pinMode(motor_Y_IN2,OUTPUT);
    pinMode(motor_Z_IN1,OUTPUT);
    pinMode(motor_Z_IN2,OUTPUT);   
}

void loop() {}