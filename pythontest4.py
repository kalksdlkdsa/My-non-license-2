from base64 import b64encode,b64decode
data = b"Super secret message."
encoded_data = b64encode(data)
decoded_data = b64decode(encoded_data)
print(encoded_data)
print(decoded_data)