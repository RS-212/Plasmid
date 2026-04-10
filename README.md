# Plasmid V0.1
## 🛑 DISCLAIMER 🛑
### !! Unfinished - no working Prototype !!
This is a hobby project under active development. There is currently no working prototype, so if you're looking for a finished Interrupter to build at home I'm sorry to disapoint.
### !!! Please take care !!!
As this project is not developed professionally it also doesn't meet any safety or security standards. There will be mistakes/oversights in the code, that's inevitable. Building and operating a Tesla Coil is dangerous and potetially deadly if done incorrectly or without care. Using the code/resources from this repository you agree that the authors are in no way liable for bodily harm, or any other kind of damages resulting from mistakes in the design, code, and other resources provided in this repository. This includes any and all kinds of usecases, intended or unintended by the author.
Always make sure you take proper precautions when operating potentially life threatening devices (like Tesla Coils). High Voltage is no Joke. Always double check your Work and make sure you know what you're doing. Last but not least: Don't forget to have fun ;)
## Description
Plasmid is an Interrupter for Dual Resonance Solid State Tesla Coils (DRSSTC). The Interrupter is responsible for generating signals for the Tesla Coil's driver to precisely control the Coil's output. (like playing music on it)

When finished, features will include:
- Generating continuous frequencies
- Generating frequency bursts
- Playing MIDI files from an SD card
- Interpreting a live MIDI signal over a MIDI connector (playing the Tesla Coil on a Keyboard)
## Implementation
### Hardware
#### Microcontroller
This Project uses Rev.2 of the YellowByte YB-ESP32-S3-AMP Development Board. For further reference see [here](https://github.com/yellobyte/YB-ESP32-S3-AMP).
This board was chosen, because of the builtin SD card reader and easy debugging using a speaker connected to the audio terminal.
#### User Interface
The current goal is to make the Interrupter a standalone device, usable without the need for a Smartphone or Laptop. Status will be displayed on a matrix LCD screen and the device will be controlled using a set of buttons/rotary encoders.
#### Peripherals
The Interrupter is connected to the Tesla Coil using a fiber optic cable. This ensures electrical isolation from any High Voltage Components. Make sure to only use non conductive cables in a dry environment to avoid electricuting yourself when handling the Interrupter.

When using the live MIDI function of the interrupter, connect your MIDI device to Plasmid using a standard 5 pin MIDI Cable. The Interrupter acts as a MIDI Instrument/Synthesizer and is able to interpret most (not all) MIDI messages.
If you don't know what that is, don't worry about it. Just plug in your keyboard, choose MIDI live mode and play some tunes on your coil ;)
### Code
The Code is written in C++ using Arduino IDE v2.
