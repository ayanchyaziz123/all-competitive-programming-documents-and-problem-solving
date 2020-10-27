import pyautogui
import time
message  = 1

while message > 0:
    time.sleep(1)
    pyautogui.typewrite("Nice")
    time.sleep(2)
    pyautogui.press('enter')
    message -= 1
