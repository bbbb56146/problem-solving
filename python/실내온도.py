# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
def getTime(clock):
	return int(clock[0])*3600+int(clock[1])*60+int(clock[2])

tc = int(input())
time = 0 #max = 60*60*24
useTime = 0
setTemp = 0
ans = 0
for t in range(tc):
	user_input = input().split()
	#현재 시각 계산
	curTime = getTime(user_input[0].split(':'))
	#명령어 계산
	if user_input[1].startswith("TURN-ON-") :
		temp=int(user_input[1][8:])
		#현재 시각 기록
		time = curTime
		#현재 세팅 온도 기록
		setTemp = temp
		
	elif user_input[1].startswith("TURN-OFF") :
		#지금까지 사용량 계산
		ans += setTemp*(curTime-time)
		#지금까지 사용 시간 계산
		useTime += (curTime-time)
		
	elif user_input[1].startswith("SET-") :
		temp=int(user_input[1][4:])
		#지금까지 사용량 계산
		ans += setTemp*(curTime-time)
		#지금까지 사용 시간 계산
		useTime += (curTime-time)
		#시각, 세팅 온도 기록
		time = curTime
		setTemp = temp
	else:
		print(user_input)
		print("err")
		
#루프 끝나고 아직 안꺼져 있었다면 남은 시간도 온도 계산? 자정엔 무조건 꺼져있다 => 하루가 지나기 전에 꼭 끈다. 신경 x
ans = ans/useTime
print(round(ans,1))