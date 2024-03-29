class Hall:
    def __init__(self, rows, cols, hall_no):
        self._seats = {}
        self._show_list = []
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no

        for i in range(rows):
            self._seats[i + 1] = [['free'] * cols for _ in range(cols)]

    def entry_show(self, show_id, movie_name, show_time):
        show_info = (show_id, movie_name, show_time)
        self._show_list.append(show_info)
        self._seats[show_id] = [['free'] * self._cols for _ in range(self._rows)]

    def book_seats(self, show_id, seats_to_book):
        if show_id not in self._seats:
            raise ValueError("Invalid show ID")

        for row, col in seats_to_book:
            if not (1 <= row <= self._rows and 1 <= col <= self._cols):
                raise ValueError("Invalid seat")

            if self._seats[show_id][row - 1][col - 1] == 'booked':
                raise ValueError("Seat already booked")

            self._seats[show_id][row - 1][col - 1] = 'booked'

    def view_show_list(self):
        return self._show_list

    def view_available_seats(self, show_id):
        if show_id not in self._seats:
            raise ValueError("Invalid show ID")

        available_seats = []
        for row in range(1, self._rows + 1):
            for col in range(1, self._cols + 1):
                if self._seats[show_id][row - 1][col - 1] == 'free':
                    available_seats.append((row, col))

        return available_seats


class Star_Cinema:
    hall_list = []

    @classmethod
    def entry_hall(cls, hall_object):
        cls.hall_list.append(hall_object)


def display_menu():
    print("\n1. View All Show Today")
    print("2. View Available Seats")
    print("3. Book Ticket")
    print("4. Exit")


def display_all_shows(cinema_hall):
    shows = cinema_hall.view_show_list()
    for show in shows:
        print(f"Movie Name: {show[1]} ({show[0]}) Show ID: {show[0]} Time: {show[2]}")


def display_available_seats(cinema_hall):
    try:
        show_id = int(input("Enter Show ID: "))
        available_seats = cinema_hall.view_available_seats(show_id)
        for row in available_seats:
            print(row)
    except ValueError:
        print("Invalid input. Please enter a valid Show ID.")


def book_ticket(cinema_hall):
    try:
        show_id = int(input("Enter Show ID: "))
        num_tickets = int(input("Number of Tickets: "))
        seats_to_book = []

        for _ in range(num_tickets):
            row = int(input("Enter Seat Row: "))
            col = int(input("Enter Seat Col: "))
            seats_to_book.append((row, col))

        cinema_hall.book_seats(show_id, seats_to_book)
        print(f"{num_tickets} ticket(s) booked for Show {show_id}")
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    hall_obj = Hall(rows=5, cols=6, hall_no=1)
    Star_Cinema.entry_hall(hall_obj)

    hall_obj.entry_show(show_id=111, movie_name="Jawan", show_time="25/02/2024 11:00 AM")
    hall_obj.entry_show(show_id=333, movie_name="Sujon Maji", show_time="25/02/2024 2:00 PM")

    while True:
        display_menu()
        option = input("Enter Option: ")

        if option == '1':
            display_all_shows(hall_obj)
        elif option == '2':
            display_available_seats(hall_obj)
        elif option == '3':
            book_ticket(hall_obj)
        elif option == '4':
            print("Exiting the program.")
            break
        else:
            print("Invalid option. Please enter a valid option.")
