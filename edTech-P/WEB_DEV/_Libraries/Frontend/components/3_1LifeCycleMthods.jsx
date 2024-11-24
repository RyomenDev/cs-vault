// Lifecycle Methods in Class Component

/*
@ Lifecycle Methods:

! Lifecycle methods are special methods in class components that allow you to run code at specific times in a component's life, such as when the component is first added to the DOM, updated, or removed.
*/

class LifecycleDemo extends Component {
    componentDidMount() {
      // Called after the component is mounted
    }
  
    componentDidUpdate(prevProps, prevState) {
      // Called after the component is updated
    }
  
    componentWillUnmount() {
      // Called before the component is unmounted
    }
  
    render() {
      return <div>Lifecycle Methods</div>;
    }
  }
  