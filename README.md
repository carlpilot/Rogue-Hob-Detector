# :fire: Rogue-Hob-Detector :fire:

Detect when the kitchen hobs have been left on and illuminate a warning light visible from the seating area.

A flaw with this implementation is that it only detects when the hob is hot and hence will be activated whenever someone is cooking. A system heavily based on [JamesHarcourt7](https://www.github.com/JamesHarcourt7)'s [Christmas Rickroll machine](https://www.github.com/JamesHarcourt7/arduino-rickroll) is therefore used to periodically play a randomly-selected quote from Gordon Ramsay whenever the hobs are on, both to add levity to cooking situations and audio feedback if the hob is unattended.

### Temperature detection circuit:
Component|Model I used|Function
-|-|-
Op-amp IC|TL072CP|Switching LED on/off from thermistor
LED light|Generic red LED|Alerting user to active hob
NTC thermistor|MF52 10kΩ|Measuring temperature of hob
Potentiometer|Generic 10kΩ|Adjusting trigger temperature
220Ω resistor|Generic|Limiting current to LED
Various wires|22 AWG solid-core|Connections
Breadboard|170pt mini breadboard|Circuit layout
Power source|5V mains adapter to bare wire|Powering device

### SD audio player circuit based on the [Christmas Rickroll Machine](https://www.github.com/JamesHarcourt7/arduino-rickroll)
Component|Model I used|Function
-|-|-
Arduino Nano|Cheap equivalent|Run program and interface w/ devices
Audio amplifier|PAM8302|Increase output volume
8Ω speaker|Small 5W speaker|Play sounds
5V MicroSD module|6-pin SPI MicroSD reader|Read data from SD card
Small MicroSD card|16GB card (any size will do)|Store audio files
Various wires|22 AWG solid-core|Connections
Capacitor (optional)|100μF capacitor|Decrease electrical noise
