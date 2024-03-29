# import pyautogui
# def draw_pyramid(levels):
#     x, y = pyautogui.position()
#     block_size = 30
#     for i in range(1, levels + 1):
#        line = "#" * i
#     pyautogui.moveTo(x, y)
#     pyautogui.click()
#     pyautogui.write(line)
#     pyautogui.press('enter')

# levels = int(input())
# draw_pyramid(levels)

# import pyautogui
# def draw_pyramid(levels):


# import pyautogui
# from time import sleep
# sleep(5)
# pyautogui.write('I love You',interval=0.25)
# pyautogui.press('enter')



import pyautogui

n = int(input())

output = ''
for i in range(1, n + 1):
    line = "#" * i
    output += line + '\n'

pyautogui.typewrite(output)
