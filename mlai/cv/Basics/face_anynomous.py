import cv2 as cv
import os 
import mediapipe as mp

def process_image(img, face_detection):

    H,W,_=img.shape

    img_rgb=cv.cvtColor(img,cv.COLOR_BGR2RGB)
    out=face_detection.process(img_rgb)

    if out.detections is not None:
        for detect in out.detections:
            bbox=detect.location_data.relative_bounding_box
            x1,y1,w,h=bbox.xmin,bbox.ymin,bbox.width,bbox.height
            x1=int(x1*W)
            y1=int(y1*H)
            w =int(w*W)
            h =int(h*H)

            if x1 < 0: x1 = 0
            if y1 < 0: y1 = 0
            if x1 + w > W: w = W - x1
            if y1 + h > H: h = H - y1
            if w > 0 and h >0:
                img[y1:y1+h, x1:x1+w] = cv.blur(img[y1:y1+h, x1:x1+w], (30, 30))

    return img

webcam =cv.VideoCapture(2)

mp_face_detection=mp.solutions.face_detection
with mp_face_detection.FaceDetection(model_selection=0,min_detection_confidence=0.5) as face_detection:

    while True:
        ret,frame=webcam.read()

        frame=process_image(frame,face_detection)

        cv.imshow("result",frame)

        if(cv.waitKey(40) & 0xFF==ord('q')):
            break

webcam.release()
cv.destroyAllWindows()