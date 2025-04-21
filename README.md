# CS 210 Portfolio: Temperature Converter

## Project Summary
This C++ program solves the problem of batch temperature conversion by:
- Reading city names and Fahrenheit temperatures from an input file (`FahrenheitTemperature.txt`)
- Converting temperatures to Celsius
- Writing results to an output file (`CelsiusTemperature.txt`)

## Reflection

### What I Did Well
- Implemented clean file I/O operations using `ifstream` and `ofstream`
- Created a dedicated conversion function for better code organization
- Added clear error messages when files are missing
- Used proper variable naming (`tempF`, `tempC`) for readability

### Areas for Improvement
1. **Security**: Could validate input temperatures (-459.67°F is absolute zero)
2. **Efficiency**: Might add buffering for large input files
3. **Features**: Could support command-line arguments for file paths

### Challenges & Solutions
**Main Challenge**: File path handling  
- Originally used absolute paths (F:\) which broke on other computers  
- **Solution**: Switched to relative paths in the same directory  
- **Resource Used**: cplusplus.com file stream documentation

### Transferable Skills
- File processing in C++
- Error handling techniques
- Data transformation logic
- Debugging file system operations
- Cross-platform compatibility considerations

### Code Quality
- **Maintainable**: Separated conversion logic into `fahrenheitToCelsius()` function
- **Readable**: Used consistent indentation and clear comments
- **Adaptable**: Easy to extend for other temperature scales (Kelvin, etc.)

## How to Run
1. Create `FahrenheitTemperature.txt` with format:
