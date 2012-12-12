MSP430POV
=========

Persistance of Vision using a TI MSP430 Microcontroller and Launchpad as programmer.

Single layer PCB intended to be etched at home (I need to test if it is possible to home etch using non photo resist methods given the widths of some of the tracks) with options for both surface mount and through hole components so the board can be used to teach soldering for either method. Note: The schematic shows duplicate resistors, capacitors and microcontrollers to allow the use of both thru-hole and SMT pads. Where possible, the components overlap to (hopefully) make it obvious that you should only use one or other of the components with (i.e. only use a thru-hole resistor or a surface mount resistor and not both). This isn't possible with small capacitors so you should only use one or the other - that said I don't think you will see many problems if you do use both, other than longer power on reset... The exception is with the LEDs. You can install both SMT and thru-hole LEDs with the active set selected by jumper.

Were applicable this is licenced under the Creative Commons Attribution-Sharealike 3.0 license (http://creativecommons.org/licenses/by-sa/3.0/)

Circuit based on http://everyonelovesleds.blogspot.co.uk/2011/05/standalone-project-basic-pov-example.html and http://www.kerrywong.com/2012/04/02/using-msp430-launchpad-as-programmer/

Initial code based on http://everyonelovesleds.blogspot.co.uk/2011/05/standalone-project-basic-pov-example.html
