# Program README

This program is designed to analyze production data for a given month. It provides various options for consulting and analyzing the production data.

## Prerequisites
- The program is written in C programming language.
- Ensure you have a C compiler installed on your system.

## Getting Started
1. Clone the repository or download the program file.
2. Compile the program using a C compiler.
3. Run the compiled program.

## Usage
The program provides the following options:

1. See all the data: Display the production data for a specified number of days.
2. See the days with lowest and biggest production: Find the minimum and maximum production values and the corresponding days.
3. See if any day produced a specific value: Check if a particular value was produced on any day.
4. Consult a specific day: Retrieve the production value for a specific day.
5. Total Computers Produced: Calculate the total number of computers produced in the given month.
6. Mean Production Value (MPV): Calculate the mean production value for the month.
7. Change The Month: Switch to another month's data.

## File Structure
The program expects the production data to be stored in separate text files for each type of month:

- `dados28.txt`: Data for a month with 28 days.
- `dados30.txt`: Data for a month with 30 days.
- `dados31.txt`: Data for a month with 31 days.

Make sure the relevant data files are present in the same directory as the program file.

## Notes
- If the values displayed do not match the values in the production sheet, update the corresponding data file.
- The program will display error messages if an incorrect input is provided but will continue to run normally.
- To exit the program, select the "Exit" option.

## Author
This program was made by Guimbreon (Guilherme Soares).

## License

These projects are licensed under the GNU General Public License. See the [LICENSE](LICENSE) file for more information.

