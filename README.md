# rgb_to_int_and_vice_versa
A failed attempt to figure out the way [The Powder Toy](https://powdertoy.co.uk/) deals with colors. While the ints outputted by this *do* work, they aren't always the defaults, and for some reason the rgb values produced by the decoder aren't right. The main exception I have noted is for BIZR, but it seems to work for most other elements.
This turns 24-bit ints into separate 8 int rgb values, and vice versa.
