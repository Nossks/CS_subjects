import torch

# This is the crucial check. It should return True.
print(f"Is CUDA available? {torch.cuda.is_available()}")

# If it's True, you can get your GPU's name
if torch.cuda.is_available():
    print(f"Device Name: {torch.cuda.get_device_name(0)}")

