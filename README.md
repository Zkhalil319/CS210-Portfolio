# CS 210 Portfolio: Temperature Converter

## Project Summary
Converts city temperatures from Fahrenheit to Celsius by reading from a text file and writing results to a new file. Solves the problem of batch temperature conversion for data analysis.

## Reflection

### What I Did Well
- Implemented clean file I/O operations
- Added clear error messages for missing files
- Created modular code with a dedicated conversion function

### Areas for Improvement
- Could add input validation for temperature ranges
- Might implement unit tests for the conversion formula
- Would improve with support for different temperature scales

### Challenges & Solutions
Most challenging part was file path handling. Originally used absolute paths (F:\), but learned to use relative paths for portability. Overcame this through research on cross-platform file handling in C++.

### Transferable Skills
- File processing in C++
- Error handling techniques
- Data transformation logic
- Debugging file system operations

### Code Quality
- Used descriptive variable names (`tempF`, `tempC`)
- Separated concerns with functions
- Added clear comments
- Followed consistent formatting
