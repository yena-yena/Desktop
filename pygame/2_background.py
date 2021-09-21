import pygame

pygame.init() #초기화(반드시 필요한 과정)

#화면 크기 설정
screen_width = 480
screen_height = 640
pygame.display.set_mode((screen_width, screen_height))

#화면 타이틀 설정
pygame.display.set_caption('Play With YeNa')

#배경이미지 불러오기
background = pygame.image.load("C:\\Users\\82103\\Desktop\\pygame\\venv\\background.png")
#이벤트 루프
running = True
while running:
    for event in pygame.event.get(): #필수적으로 써야 함
        if event.type == pygame.QUIT:
            running = False

    screen.blit(background, (0,0))

    pygame.display.update()

pygame.quit()