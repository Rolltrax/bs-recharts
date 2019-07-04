// http://recharts.org/en-US/api/Scatter

module Binding = {
  [@bs.module "recharts"] [@react.component]
  external make:
    (
      ~legendType: [@bs.string] [
                     | `line
                     | `square
                     | `rect
                     | `circle
                     | `cross
                     | `diamond
                     | `square
                     | `star
                     | `triangle
                     | `wye
                   ]
                     =?,
      ~xAxisId: string=?,
      ~yAxisId: string=?,
      ~zAxisId: string=?,
      ~className: string=?,
      ~data: array(Js.t({..})),
      ~dataKey: 'dataKey,
      ~line: 'line=?,
      ~shape: 'shape=?,
      ~lineType: 'lineType=?,
      ~points: array('point)=?,
      ~isAnimationActive: bool=?,
      ~animationBegin: int=?,
      ~animationDuration: int=?,
      ~animationEasing: [@bs.string] [
                          | `ease
                          | [@bs.as "ease-in"] `easeIn
                          | [@bs.as "ease-out"] `easeOut
                          | [@bs.as "ease-in-out"] `easeInOut
                          | `linear
                        ]
                          =?,
      ~onClick: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseEnter: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit
                       =?,
      ~onMouseLeave: (Js.t({..}), ReactEvent.Mouse.t) => unit=?,
      ~onMouseOut: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseUp: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseDown: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~onMouseMove: (Js.Nullable.t(Js.t({..})), ReactEvent.Mouse.t) => unit=?,
      ~id: string=?
    ) =>
    React.element =
    "Scatter";
};

[@react.component]
let make =
    (
      ~legendType=?,
      ~xAxisId=?,
      ~yAxisId=?,
      ~zAxisId=?,
      ~className=?,
      ~data,
      ~dataKey,
      ~line=?,
      ~shape=?,
      ~lineType=?,
      ~points=?,
      ~isAnimationActive=?,
      ~animationBegin=?,
      ~animationDuration=?,
      ~animationEasing=?,
      ~onClick=?,
      ~onMouseEnter=?,
      ~onMouseLeave=?,
      ~onMouseOut=?,
      ~onMouseUp=?,
      ~onMouseDown=?,
      ~onMouseMove=?,
      ~id=?,
    ) =>
  Binding.make(
    Binding.makeProps(
      ~legendType?,
      ~xAxisId?,
      ~yAxisId?,
      ~zAxisId?,
      ~className?,
      ~data,
      ~dataKey,
      ~line?,
      ~shape?,
      ~lineType?,
      ~points?,
      ~isAnimationActive?,
      ~animationBegin?,
      ~animationDuration?,
      ~animationEasing?,
      ~onClick?,
      ~onMouseEnter?,
      ~onMouseLeave?,
      ~onMouseOut?,
      ~onMouseUp?,
      ~onMouseDown?,
      ~onMouseMove?,
      ~id?,
      (),
    ),
  );