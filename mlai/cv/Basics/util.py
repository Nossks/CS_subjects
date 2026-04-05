import numpy as np
import cv2 as cv

def get_limits(color):
    # Convert the BGR color to HSV
    c = np.uint8([[color]])  # Wrap color in a numpy array
    hsvC = cv.cvtColor(c, cv.COLOR_BGR2HSV)  # Convert BGR to HSV

    # Generate lower and upper limits with a margin
    lowerLimit = hsvC[0][0][0] - 10, 100, 100
    upperLimit = hsvC[0][0][0] + 10, 255, 255

    # Ensure they are numpy arrays with uint8 dtype
    lowerLimit = np.array(lowerLimit, dtype=np.uint8)
    upperLimit = np.array(upperLimit, dtype=np.uint8)

    return lowerLimit, upperLimit
