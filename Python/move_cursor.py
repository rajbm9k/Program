import time
import pyautogui

print("Mouse pointer will keep moving!!\n\n Press ctrl+c to stop...!")

while True:
    pyautogui.moveTo(480, 300, duration = 1)
    time.sleep(25)

    pyautogui.dragRel(600, 300, duration = 1)
    time.sleep(25)
    