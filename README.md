# Arduino Access Control System with Keypad and Fingerprint Sensor R305

![Access Control System](https://github.com/ahmed-eldesoky284/Quiz-5/blob/main/Capture5.png)

## Features

- Secure access control using a combination of password and fingerprint.
- Programmable password for easy customization.
- Reliable fingerprint recognition using the R305 sensor.
- Customizable access control logic and actions.
- Arduino-compatible, allowing for easy integration with other projects.

## Requirements

To replicate or modify this project, you will need the following components:

- Arduino board (e.g., Arduino Uno, Arduino Nano)
- Keypad (any standard 4x4 or 3x4 keypad will work)


## Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/ahmed-eldesoky284/Quiz3.git
   ```

2. Connect the Arduino board to your computer using a USB cable.

3. Connect the keypad and fingerprint sensor to the Arduino board as per the circuit diagram provided in the repository.

4. Open the Arduino IDE (Integrated Development Environment) on your computer.

5. In the Arduino IDE, go to **File** > **Open** and navigate to the cloned repository folder. Open the `Password-Fingerprint.ino` file.

6. Make sure you have the required libraries installed. If not, install them by going to **Sketch** > **Include Library** > **Manage Libraries** and search for the following libraries:

   - `Adafruit_Fingerprint` (for fingerprint sensor)
   - `Keypad` (for keypad)

7. Select the appropriate Arduino board and port from the **Tools** menu.

8. Compile and upload the code to the Arduino board by clicking on the **Upload** button.

9. Once the code is uploaded successfully, open the serial monitor to view the system output.

## Usage

1. Power up the Arduino board using a 5V power supply.

2. The system will prompt you to enter the password using the keypad. The default password is `1345`, but you can modify it in the code.

3. After entering the password, the system will prompt you to place your finger on the fingerprint sensor.

4. If the entered password and fingerprint match, the system will grant access by turning on an LED or performing any other desired action. Otherwise, access will be denied.

5. The system output will be displayed on the serial monitor, indicating whether access was granted or denied.

## Customization

You can customize the access control logic and actions according to your requirements. In the `Password-Fingerprint.ino` file, you will find comments and instructions to guide you through the customization process.



## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue on the GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE).
