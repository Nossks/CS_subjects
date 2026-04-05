import cv2 as cv
import pytesseract

# Load and convert the image to grayscale
img = cv.imread("./output_image.jpg")
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

# Optional: Apply Gaussian blur to reduce noise
blur = cv.GaussianBlur(gray, (5, 5), 0)

# Use adaptive thresholding for better text segmentation
thresh = cv.adaptiveThreshold(blur, 255, cv.ADAPTIVE_THRESH_GAUSSIAN_C, cv.THRESH_BINARY, 11, 5)

# Perform OCR with Tesseract
custom_config = r'--oem 3 --psm 6'  # Use LSTM OCR and treat input as a single block of text
text = pytesseract.image_to_string(thresh, lang="eng", config=custom_config)
print("Detected Text:", text)

# Display the thresholded image
cv.imshow("Preprocessed Image", thresh)
cv.waitKey(0)
