import os
import cv2

# #read
# img_path =os.path.join('.','Screenshot from 2024-12-16 21-37-36.png')
# img=cv2.imread(img_path)

# #write
# cv2.imwrite(os.path.join('.','output_image.jpg'),img);

# #visualize
# cv2.imshow('image',img)
# cv2.waitKey(0)




# ##with video


# vid_path=os.path.join('.','vid.mp4')
# video=cv2.VideoCapture(vid_path)

# ret=True
# while ret:
#     ret,frame=video.read()
#     if ret:
#         cv2.imshow('frame',frame)
#         cv2.waitKey(33)

# video.release()
# cv2.destroyAllWindows()



webcam=cv2.VideoCapture(2)
while True:
    ret,frame=webcam.read()
    cv2.imshow('frame',frame)
    if cv2.waitKey(40) & 0xFF == ord('q'):
        break;

webcam.release()
cv2.destroyAllWindows()











