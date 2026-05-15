const limitSW_L = D6;
const limitSW_R = D7;
const limitSW_F = D10;
const limitSW_B = D11;
const limitSW_U = D12;
const limitSW_D = D13;

const int motor_X_IN1 = D2;
const int motor_X_IN2 = D3;
const int motor_Y_IN1 = D4;
const int motor_Y_IN2 = D5;
const int motor_Z_IN1 = D8;
const int motor_Z_IN2 = D9;

void setup() {
    pinMode(limitSW_L, INPUT_PULLUP);
    pinMode(limitSW_R, INPUT_PULLUP);
    pinMode(limitSW_F, INPUT_PULLUP);
    pinMode(limitSW_B, INPUT_PULLUP);
    pinMode(limitSW_U, INPUT_PULLUP);
    pinMode(limitSW_D, INPUT_PULLUP);

    pinMode(motor_X_IN1, OUTPUT);
    pinMode(motor_X_IN2, OUTPUT);
    pinMode(motor_Y_IN1, OUTPUT);
    pinMode(motor_Y_IN2, OUTPUT);
    pinMode(motor_Z_IN1, OUTPUT);
    pinMode(motor_Z_IN2, OUTPUT);

    initializeActuator();
}

void initializeActuator() {
    int time = 0;
    while ((digitalRead(limitSW_U) == LOW) && (time >= 500)) {
        down();
        delay(1);
        time++;
    }
    stop();
    delay(500);
    while (digitalRead(limitSW_U) == HIGH) {
        up();
    }
    stop();
    delay(500);
    while (digitalRead(limitSW_R) == HIGH) {
        right();
    }
    stop();
    delay(2000);
    while (digitalRead(limitSW_B) == HIGH) {
        back();
    }
    delay(2000);
    while (digitalRead(limitSW_D) == HIGH) {
        down();
    }
    stop();
    delay(2000);
    while (digitalRead(limitSW_U) == HIGH) {
        up();
    }

    time = 0;
    while ((digitalRead(limitSW_F) == LOW) && (time >= 500)) {
        back();
        delay(1);
        time++;
    }
    stop();
    delay(2000);

    while (digitalRead(limitSW_F) == HIGH) {
        front();
    }

    time = 0;
    while ((digitalRead(limitSW_L) == LOW) && (time >= 500)) {
        right();
        delay(1);
        time++;
    }
    stop();
    delay(500);
    while (digitalRead(limitSW_L) == HIGH) {
        left();
    }
}

void stop() {
    digitalWrite(motor_X_IN1, HIGH);
    digitalWrite(motor_X_IN2, HIGH);
    digitalWrite(motor_Y_IN1, HIGH);
    digitalWrite(motor_Y_IN2, HIGH);
    digitalWrite(motor_Z_IN1, HIGH);
    digitalWrite(motor_Z_IN2, HIGH);
}

void home() {}

void up() {
    digitalWrite(motor_Z_IN1, LOW);
    digitalWrite(motor_Z_IN2, HIGH);
}

void down() {
    digitalWrite(motor_Z_IN1, HIGH);
    digitalWrite(motor_Z_IN2, LOW);
}

void left() {
    digitalWrite(motor_X_IN1, HIGH);
    digitalWrite(motor_X_IN2, LOW);
}

void right() {
    digitalWrite(motor_X_IN1, LOW);
    digitalWrite(motor_X_IN2, HIGH);
}

void front() {
    digitalWrite(motor_Y_IN1, HIGH);
    digitalWrite(motor_Y_IN2, LOW);
}

void back() {
    digitalWrite(motor_Y_IN1, LOW);
    digitalWrite(motor_Y_IN2, HIGH);
}

void loop() {}