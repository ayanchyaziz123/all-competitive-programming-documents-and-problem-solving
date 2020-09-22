import pyautogui
import time
message  = 100

while message > 0:
    time.sleep(4)
    pyautogui.typewrite("I need you and I Love you you mera janI need you and I Love you you mera jan")
    time.sleep(2)
    pyautogui.press('enter')
    message -= 1