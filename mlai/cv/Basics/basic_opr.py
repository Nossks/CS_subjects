import os
import cv2

##resize
img=cv2.imread(os.path.join('.','output_image.jpg'))
cv2.imshow('image',img)
cv2.waitKey(0)
print(img.shape)


# resized_img=cv2.resize(img,(740,720))
# cv2.imshow('image',resized_img)
# cv2.waitKey(0)
# print(resized_img.shape)


#crop
cropped_img=img[35:163,224:703]
cv2.imshow('image',cropped_img)
cv2.waitKey(0)
print(cropped_img.shape)













