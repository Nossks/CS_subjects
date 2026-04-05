from ultralytics import YOLO
import cv2 as cv

model = YOLO(model='yolov10n.pt')

web = cv.VideoCapture(0)

while(True):
    ret,frame = web.read()

    # results = model(frame,stream=True)
    # frame = results[0].plot()

    cv.imshow('live',frame)
    if cv.waitKey(1) & 0xFF==ord('q'):
        break

web.release()
cv.destroyAllWindows()