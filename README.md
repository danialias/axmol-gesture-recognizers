Axmol Engine Gesture Recognizers
=============================

Original version by [Alfonso Grillo](https://github.com/alfogrillo)     
Adaptation for Axmol Engine by Daniel Alias on 24/12/14 (yy/mm/dd)

This project is an extension for Axmol Engine that provide touch Gesture Recognizers.

The classes recognize the following gestures:

- **Swipe** (one finger, 4 directions)
- **Long press** (one or multiple fingers)
- **Pinch** with rotation (two fingers)
- **Pan** (one or multiple fingers)
- **Tap** (one or multiple taps with one or multiple fingers)

This work was inspired by Apple documentation about the Gesture Recognizers:

[Apple Gesture Recognizers](https://developer.apple.com/library/ios/documentation/EventHandling/Conceptual/EventHandlingiPhoneOS/GestureRecognizer_basics/GestureRecognizer_basics.html) for iOS

Gestures in action on [YouTube](https://www.youtube.com/watch?v=Gnhj_x4aOwY)


How to integrate gestures code inside your (or new) project
----------

The repository contains two folders inside `Source` folder:
- Gestures
- Test

The actual gesture recognition requires **only** the `Gestures` folder.   
    

The `Test` folder contains various example scenes. To try the code you can do the following steps:
- Delete `Source` and `Content` folders from the sample project and add those of this repository
- Add the source files on CMakeList.txt

**License** [MIT](https://opensource.org/licenses/MIT)
