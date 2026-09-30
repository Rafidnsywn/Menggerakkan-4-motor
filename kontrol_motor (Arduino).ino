// Deklarasi Pin Motor 1
const int m1_a = 2;
const int m1_b = 3;

// Deklarasi Pin Motor 2
const int m2_a = 4;
const int m2_b = 5;

// Deklarasi Pin Motor 3
const int m3_a = 6;
const int m3_b = 7;

// Deklarasi Pin Motor 4
const int m4_a = 8;
const int m4_b = 9;

void setup() {
  // Set semua pin kontrol motor sebagai OUTPUT
  pinMode(m1_a, OUTPUT);
  pinMode(m1_b, OUTPUT);
  pinMode(m2_a, OUTPUT);
  pinMode(m2_b, OUTPUT);
  pinMode(m3_a, OUTPUT);
  pinMode(m3_b, OUTPUT);
  pinMode(m4_a, OUTPUT);
  pinMode(m4_b, OUTPUT);
}

void loop() {
  // 1. Semua motor berputar MAJU selama 3 detik
  maju();
  delay(3000);

  // 2. Semua motor BERHENTI selama 1 detik
  berhenti();
  delay(1000);

  // 3. Semua motor berputar MUNDUR selama 3 detik
  mundur();
  delay(3000);

  // 4. Semua motor BERHENTI selama 1 detik
  berhenti();
  delay(1000);
}

// Fungsi untuk menggerakkan semua motor maju
void maju() {
  digitalWrite(m1_a, HIGH);
  digitalWrite(m1_b, LOW);
  
  digitalWrite(m2_a, HIGH);
  digitalWrite(m2_b, LOW);
  
  digitalWrite(m3_a, HIGH);
  digitalWrite(m3_b, LOW);
  
  digitalWrite(m4_a, HIGH);
  digitalWrite(m4_b, LOW);
}

// Fungsi untuk menggerakkan semua motor mundur
void mundur() {
  digitalWrite(m1_a, LOW);
  digitalWrite(m1_b, HIGH);
  
  digitalWrite(m2_a, LOW);
  digitalWrite(m2_b, HIGH);
  
  digitalWrite(m3_a, LOW);
  digitalWrite(m3_b, HIGH);
  
  digitalWrite(m4_a, LOW);
  digitalWrite(m4_b, HIGH);
}

// Fungsi untuk menghentikan semua motor
void berhenti() {
  digitalWrite(m1_a, LOW);
  digitalWrite(m1_b, LOW);
  
  digitalWrite(m2_a, LOW);
  digitalWrite(m2_b, LOW);
  
  digitalWrite(m3_a, LOW);
  digitalWrite(m3_b, LOW);
  
  digitalWrite(m4_a, LOW);
  digitalWrite(m4_b, LOW);
}
