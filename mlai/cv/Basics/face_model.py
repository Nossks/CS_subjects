import numpy
import cv2 as cv
import face_recognition

img=face_recognition.load_image_file("/home/cry-more/cv/face_recog/train.png")
t1=face_recognition.load_image_file("/home/cry-more/cv/face_recog/t2.png")


img=cv.cvtColor(img,cv.COLOR_BGR2RGB)
t1=cv.cvtColor(t1,cv.COLOR_BGR2RGB)


face_loc_train=face_recognition.face_locations(img)[0]
face_loc_test=face_recognition.face_locations(t1)[0]


encode_train=face_recognition.face_encodings(img)[0]
encode_t1=face_recognition.face_encodings(t1)[0]


print(face_recognition.compare_faces(encode_train,[encode_t1])[0])
print(face_recognition.face_distance(encode_train,[encode_t1])[0])

cv.rectangle(img,(face_loc_train[3],face_loc_train[0]),(face_loc_train[1],face_loc_train[2]),(0,0,0),3)
cv.rectangle(t1,(face_loc_test[3],face_loc_test[0]),(face_loc_test[1],face_loc_test[2]),(0,0,0),3)


cv.imshow("result",img)
cv.waitKey(0)
cv.imshow("result",t1)
cv.waitKey(0)