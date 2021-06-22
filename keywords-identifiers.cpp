//** Keywords **//

// C++ reserves a set of 92 words (as of C++ 20) for its own use. These words are called
// keywords (or reserved words), and each of these keywords has a special meaning withing
// the C++ language.

// Here is a list of all the C++ keywords (through C++20)
#include <iostream>

alignas
alignof
and
and_eq
asm
auto
bitand
bitor
bool
break
case
catch
char
char8_t
char16_t
char32_t
class
concept
const
consteval
constexpr
constinit
const_cast
continue
co_await
co_return
co_yield
decltype
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace 
new
noexcept
not
not_eq
nullptr
operator
or
or_eq
private
protected
public
register
reinterpret_cast
requires
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
volatile
wchar_t
while
xor
xor_eq

// C++ also defines special identifiers: override, final, import, module. These have a specific meaning when used in certain contexts but are not reserved.

//** Identifier naming rules **//

// As a reminder, the name of a variable (or function, type, or other kind of item) is called an identifier.
// C++ gives you a lot of flexibility to name identifiers as you wish.
// However, there are a few rules that must be followed when naming identifiers:
    // The identifier can not be a keyword.
    // The identifier can only be composed of letters (lower or upper case), numbers, and the underscore character.
    // The identifier must begin with a letter (lower or upper case) of an underscore. It can not start with a number.
    // C++ is case sensitive, and thus distinguishes between lower and upper case letters. 

//** Identifier naming best practices **//

// In C++ it is convention that variable names should begin with a lowercase letter. If the variable name is one word,
// the whole thing should be written in lowercase letters.

// More often, function names are also started with a lowercase letter (though there's some disagreement on this point).
// We'll follow this convention, since function main (which all programs must have) starts with a lowercase letter,
// as do all of the functions in the C++ standard library.

// Identifier names that start with a capital letter are typically used for user-defined types (such as structs, classes,
// and enumerations).

// If the variable of function name is multi-word, there are two common conventions: words separated by underscores,
// called snake_case, or intercapper (sometimes called camelCase, since the capital letters stick up like the humps on a camel).

    //** Best practice **//

    // When working in an existing program, use the conventions of that program (even if they don't conform to modern best pratices).
    // Use modern best practices when you're writing new programs.

// Avoid naming identifiers starting with an underscore, as these names are typically reserved for OS, library, and/or compiler use.

// Your identifiers should make clear what the value they are holding means. Identifiers should be named in a way that would help
// someone who has no idea what your code does be able to figure it out as quickly as possible. In 3 months, when you look at your
// program again, you'll have forgotten how it works, and you'll thank yourself for picking variable names that make sense.

// However, giving a trivial variable an overly complex name impedes overall understanding of what the program is doing almost as
// much as giving a widely used identifier an inadequate name. Therefore, a good rule of thumb is to make the length of an identifier
// proportional to how widely it is used. An identifier with a trivial use can have a short name (e.g. such as i). An identifier that
// is used more broadly (e.g. a function that is called from many different places in a program) should have a longer and more descriptive
// name (e.g. instead of open, try openFileOnDisk).

// In any case, avoid abbreviations. Although they reduce the time you need to write your code, they make your code harder to read.
// Even if the abbreviation is unambiguous, it takes the reader a moment to figure out what you meant. Code is read more often than
// it is writter, the time you saved while writing the code is time that every reader, including the future you, wastes when reading it.
// If you're looking to write faster, user your editor's auto-complete feature.

// Finally, a clarifying comment can go a long way. For example, say we've declared a variable named numberOfChars that is supposed to store
// the number of characters in a piece of test. Does the "Hello World!" have 10, 11, 12 or characters? It depends on whether we're including
// whitespace or punctuation. Rather than naming the variable numberOfCharsIncludingWhitespaceAndPunctuation, which is rather lengthy, a well
// placed comment on the declaration line should help the user figure it out:

// holds number of chars in a piece of text -- including whitespace and punctuation

int numberOfChars;
