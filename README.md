# ArduinoUseWatchdog

The files in the ArduinoCode folder, together with the following post on my webiste (ADD LINK), show you how you can use the Arduino watchdog to prevent hangs in your code, to put your board in the lowest power mode for energy savings while still waking it up periodically, and to do both simulaneously.

## Use your watchdog to prevent code hangs

The SimpleWatchdog.ino program shows the very basics of how to use the arduino watchdog.

## Use your watchdog for saving power

The WatchdogControlSleep.ino program shows how to use watchdog to periodically wake up an Arduino board from the lowest energy sleep. Bit registers correspond to the Arduino Uno board.

## Use your watchdog for preventing code hangs and power savings

The WatchdogHangAndPowerControl.ino program shows how to use the watchdog to both prevent code hangs and put the Arduino board into lowest power consumption mode while waking it periodically. Bit registers correspond to the Arduino Uno board.
