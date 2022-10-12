# [taskbar-hider](https://www.npmjs.com/package/taskbar-hider)

A node module to hide or show windows taskbar

## Installation
#### You must have [Visual Studio Community](https://visualstudio.microsoft.com/pt-br/) installed in order to install this package.

```bash
yarn add taskbar-hider
```

or

```bash
npm install taskbar-hider
```

## Usage

#### Using require syntax

```javascript
const TaskbarHider = require("taskbar-hider");

TaskbarHider.hideTaskbar();
//Hides the taskbar

TaskbarHider.showTaskbar();
//Shows the taskbar

TaskbarHider.toggleTaskbar();
//Shows the taskbar if it is hidden and vice versa

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)
