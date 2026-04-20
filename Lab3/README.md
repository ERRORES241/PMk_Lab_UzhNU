# Lab Work №3 / Лабораторна робота №3

This directory contains the implementation of Laboratory Work №3, focused on interfacing a matrix keypad with the PSoC microcontroller.

---

## English Version

### 1. About the Lab
The primary goal of this project is to understand the principles of connecting and scanning a matrix keypad using the PSoC Creator environment. The project demonstrates:
* Efficient I/O usage by organizing buttons into rows and columns.
* Real-time button scanning and debouncing logic.
* Interaction between user input and system outputs (LED control and UART communication).

### 2. Tools and Technologies
* **Software:** PSoC Creator 4.4.
* **Hardware:** PSoC 4 series microcontroller (Pioneer Kit).
* **Language:** C.
* **Components used:** Digital Bidirectional Pins (for columns), Digital Input Pins (for rows), Software Transmit UART (for terminal output), and RGB LED.

### 3. Implementation Details
* **Hardware Configuration:** In `TopDesign.cysch`, columns are configured as open-drain (drives low), and rows are set as high-impedance digital inputs with internal pull-up resistors.
* **Scanning Algorithm:** The firmware iteratively pulls each column low and reads the state of all rows to identify which specific key is pressed.
* **Logic:** The code includes a state machine that detects new key presses, sends the button index to a serial terminal via UART, and changes the RGB LED color based on the specific button pressed.

---

## Українська версія

### 1. Про що лабораторна робота
Основною метою цього проєкту є вивчення принципів підключення та сканування матричної клавіатури за допомогою середовища PSoC Creator. Проєкт демонструє:
* Ефективне використання виводів (I/O) шляхом організації кнопок у рядки та стовпці.
* Логіку сканування кнопок у реальному часі.
* Взаємодію між вводом користувача та виходами системи (керування світлодіодом та зв'язок через UART).

### 2. За допомогою чого зроблена
* **Програмне забезпечення:** PSoC Creator 4.4.
* **Апаратне забезпечення:** Мікроконтролер серії PSoC 4 (Pioneer Kit).
* **Мова програмування:** C.
* **Використані компоненти:** Digital Bidirectional Pins (для стовпців), Digital Input Pins (для рядків), Software Transmit UART (для виводу в термінал) та RGB LED.

### 3. Як зроблена (реалізація)
* **Апаратна конфігурація:** У файлі `TopDesign.cysch` стовпці налаштовані як "open-drain (drives low)", а рядки — як цифрові входи з високим опором (high-impedance) та внутрішніми підтягуючими резисторами.
* **Алгоритм сканування:** Прошивка ітеративно подає низький рівень на кожен стовпець і зчитує стан усіх рядків, щоб визначити, яка саме клавіша натиснута.
* **Логіка:** Код містить обробник станів, який фіксує натискання, надсилає номер кнопки в термінал через UART та змінює колір RGB-світлодіода залежно від натиснутої клавіші.
