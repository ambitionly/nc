namespace Nc\Renderer;

use Nc\Application\Http;

interface RendererInterface
{
    public function withHttp(<Http> http) -> void;
    public function render() -> void;

}
