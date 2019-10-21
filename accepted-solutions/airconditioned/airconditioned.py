n = int(input())
dataPoints = []

for i in range(n):
    points = [int(x) for x in input().split()]
    dataPoints.append([points[0], points[1]])

dataPoints.sort(key = lambda k: [k[1],  k[0]])

currentRoom = dataPoints[0][1]
roomCount = 1
for p in dataPoints[1:]:
    if p[0] > currentRoom:
        currentRoom = p[1]
        roomCount += 1

print(roomCount)