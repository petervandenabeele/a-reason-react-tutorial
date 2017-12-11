let component = ReasonReact.statelessComponent("TodoApp");

type item = {
  title: string,
  completed: bool
};

type state = {
  /* this is type with a type argument */
  items: list(item)
};

let make = (children) => {
  ...component,
  render: (self) =>
    <div className="app">
      <div className="title">
        (ReasonReact.stringToElement("What to do"))
      </div>
      <div className="items">
        (ReasonReact.stringToElement("A lot actually :-)"))
      </div>
    </div>
};
