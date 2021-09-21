import pygame
#1.
pygame.init()

#2.
size = [400, 900]
screen = pygame.display.set_mode(size)

#3.
clock = pygame.time.Clock()
color1 = (1, 3, 7)
color2 = (50, 30, 0)

#4.
vk = 0
while vk == 0:
    color = color1

#4-1.
clock.tick(20)

#4-2.
for event in pygame.event.get():
    if event.type == pygame.QUIT:
        vk = 1

#4-3.


#4-4.
screen.fill(color)

#4-5.
pygame.display.flip()

#5.
pygame.quit()