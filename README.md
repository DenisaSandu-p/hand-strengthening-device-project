# Hand-grip strengthening device project
## Prototype

![Hand grip trainer showing the handle, finger slots and spring mechanism](media#/hand-device.jpg)
A hand-strengthening prototype combining a 3D-printed grip mechanism with interchangeable compression springs. An Arduino Uno electronics prototype uses a pressure sensor and display to provide repetition feedback.

## Mechanical design

The device is operated by squeezing a handle towards a palm component against spring resistance.

I designed and 3D-printed the handle and palm component, then developed a slide-in spring attachment using polygel. This allows the compression springs to be removed and exchanged.

My first approach used hooks to hold the springs, but this did not work as intended. I revised the attachment by moulding an end coil of a spring into polygel on a circular polygel base.

## Arduino electronics

I wrote Arduino code to read a pressure sensor and display:

* A repetition count.
* A relative sensor reading from 0–100%, intended to provide feedback when a repetition is registered.

The electronics currently operate separately from the grip device. The intended next step is to mount the sensor on the handle and integrate the wiring into the assembly.

## Current limitations

The sensor is highly sensitive and reaches 100% with relatively little pressure. The displayed percentage is therefore not a calibrated measurement of grip force.

The electronics demonstrate the sensing and display functions, but reliable detection of complete squeezes on the assembled device still needs to be tested.

 The device currently uses a string tied around the hand to keep it securely positioned. This is difficult to fasten independently.

## My contribution

* Designed the handle and palm component.
* 3D-printed and assembled the mechanical parts.
* Developed a removable spring attachment.
* Revised the design after the initial hook attachment proved unsuccessful.
* Wrote the Arduino code for sensor input, repetition counting and display output.

## Portability and ease of use

I designed the device to be compact, lightweight and easy to carry in an everyday bag. The handle includes designated finger slots to guide hand placement.

The aim was to make grip exercises convenient to fit into daily routines, with short sessions of around 5–10 minutes—for example, while waiting for a bus.

## Further development

* Replace the string with an adjustable Velcro strap to make the device easier to secure and remove without assistance.
* Widen the finger slots to accommodate a broader range of hand sizes, as the current dimensions are based on my own hand.
* Refine the handle shape to account for differences in finger length, particularly the shorter little finger, to improve comfort while gripping.
* Integrate the sensor and electronics into the grip device.
* Adjust sensor sensitivity and repetition thresholds.
* Test whether each complete squeeze is counted once.
* Assess the durability of the spring attachment through repeated use.
